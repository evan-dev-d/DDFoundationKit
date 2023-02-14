//
//  DD_RAC.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <ReactiveObjC/ReactiveObjC.h>

#define DDKitRACObserve(TARGET, KEYPATH) \
({ \
__weak id target_ = (TARGET); \
[target_ rac_valuesAndChangesForKeyPath:@keypath(TARGET, KEYPATH) options:NSKeyValueObservingOptionOld observer:self]; \
})
