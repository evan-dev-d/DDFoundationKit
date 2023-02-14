//
//  UIViewController+DDMail.h
//  DDKit
//
//  Created by Evan on 2023/2/7.
//

#import <UIKit/UIKit.h>

@interface UIViewController (DDMail)

- (void)openMailAPP;

- (void)dd_mailToRecipients:(NSArray *)toRecipients;

- (void)dd_mailToRecipients:(NSArray *)toRecipients ccRecipients:(NSArray *)ccRecipients bccRecipients:(NSArray *)bccRecipients
                     subject:(NSString *)subject
                        body:(NSString *)body isHTML:(BOOL)isHTML
                  attachment:(NSData *)attachment mimeType:(NSString *)mimeType fileName:(NSString *)filename;

@end
