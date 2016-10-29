//
//  HPHint.h
//  HavePicture
//
//  Created by Huan on 16/5/25.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HPHint : NSObject


#pragma mark 修改 SVProgressHUD

+ (void)showSuccessWithStatus:(NSString*)string;
+ (void)showErrorWithStatus:(NSString *)string;
+ (void)showInfoWithStatus:(NSString*)status;


+ (void)showStatus:(NSString*)status;

+ (void)dissmissHUD;

@end
