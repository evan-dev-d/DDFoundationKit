//
//  DDKitMacros.h
//  DDKit
//
//  Created by Evan on 2023/2/1.
//

#ifndef DDKitMacros_h
#define DDKitMacros_h

#import "UIView+DDManualLayout.h"

/*
 * ********************************* 弱引用定义 ********************************************
 */
#define DDWeakDef   __weak typeof(self) weakSelf = self

/*
 * ********************************* 字符串常量声明 ********************************************
 */
/**
 * 字符串常量声明
 */
#define DDStringExtern(str) extern NSString * const str

/**
 * 字符串常量定义
 */
#define DDStringDefine(str) NSString * const str = @#str

/*
 * ********************************* Assert ********************************************
 */

#pragma mark - Assert

#define NSAssertInBlock(condition, weakSelf, desc, ...)    \
    do {                \
    __PRAGMA_PUSH_NO_EXTRA_ARG_WARNINGS \
    if (__builtin_expect(!(condition), 0)) {        \
            NSString *__assert_file__ = [NSString stringWithUTF8String:__FILE__]; \
            __assert_file__ = __assert_file__ ? __assert_file__ : @"<Unknown File>"; \
        [[NSAssertionHandler currentHandler] handleFailureInMethod:_cmd \
        object:weakSelf file:__assert_file__ \
            lineNumber:__LINE__ description:(desc), ##__VA_ARGS__]; \
    }                \
        __PRAGMA_POP_NO_EXTRA_ARG_WARNINGS \
    } while(0)

#ifdef DEBUG
#define DDAssert(condition, desc, ...) {if (__builtin_expect(!(condition), 0)) { NSLog(desc, ##__VA_ARGS__); } NSAssert(condition, desc, ##__VA_ARGS__);}

#define DDAssertInBlock(condition, weakSelf, desc, ...) {if (__builtin_expect(!(condition), 0)) { NSLog(desc, ##__VA_ARGS__); } NSAssertInBlock(condition, weakSelf ,desc, ##__VA_ARGS__);}
#else
#define DDAssert(condition, desc, ...) {if (__builtin_expect(!(condition), 0)) { NSLog(desc, ##__VA_ARGS__); }}

#define DDAssertInBlock(condition, weakSelf, desc, ...) {if (__builtin_expect(!(condition), 0)) { NSLog(desc, ##__VA_ARGS__); }}
#endif

/*
 * ********************************* Clang ********************************************
 */
#pragma mark - Clang

#define DDArgumentToString(macro) #macro
#define DDClangWarningConcat(warning_name) DDArgumentToString(clang diagnostic ignored warning_name)

/// 参数可直接传入 clang 的 warning 名，warning 列表参考：https://clang.llvm.org/docs/DiagnosticsReference.html
#define DDBeginIgnoreClangWarning(warningName) _Pragma("clang diagnostic push") _Pragma(DDClangWarningConcat(#warningName))
#define DDEndIgnoreClangWarning _Pragma("clang diagnostic pop")

#define DDBeginIgnorePerformSelectorLeaksWarning DDBeginIgnoreClangWarning(-Warc-performSelector-leaks)
#define DDEndIgnorePerformSelectorLeaksWarning DDEndIgnoreClangWarning

#define DDBeginIgnoreAvailabilityWarning DDBeginIgnoreClangWarning(-Wpartial-availability)
#define DDEndIgnoreAvailabilityWarning DDEndIgnoreClangWarning

#define DDBeginIgnoreDeprecatedWarning DDBeginIgnoreClangWarning(-Wdeprecated-declarations)
#define DDEndIgnoreDeprecatedWarning DDEndIgnoreClangWarning


#endif /* DDKitMacros_h */
