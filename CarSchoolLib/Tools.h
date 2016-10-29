//
//  Tools.h
//  NiuHome
//
//  Created by 王云鹏 on 15/6/24.
//  Copyright (c) 2015年 niuhome.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface Tools : NSObject

//===========================设置导航栏=====================
/**
 *  设置导航栏，只是图片 针对按钮，有按下效果
 */
+ (void)setNavigationBar:(UINavigationItem *)item withImage:(NSString *)imageName withPressImage:(NSString *)pressImageName withIsLeft:(BOOL)isLeft withTarget:(id)target withSel:(SEL)action;

//==========================设置边界======================
/**
 *  设置边界，针对大部分以上的View  宽度为0.5
 */
+ (void)setBorderWithView:(UIView *)view;

/**
 *  设置边界，针对特定的带颜色边界的view
 */
+ (void)setBorderWithColor:(UIColor *)color withView:(UIView *)view;

/**
 *  设置边界，针对特定的带颜色边界特定宽度的view
 *
 *  @param color       颜色
 *  @param borderWidth 边界宽度
 *  @param view        uiview
 */
+ (void)setBorderWithColor:(UIColor *)color withBorderWidth:(float)borderWidth withView:(UIView *)view;

/**
 *  验证手机号码是否合法
 */
+ (BOOL)checkPhoneNumber:(NSString *)mobileNum;


/**
 *  给视图加上下两条线
 */

+ (void)addTopLineView:(UIView *)view;


+(BOOL)isValidateEmail:(NSString *)email;

////获得当前手机app的所有bundle id
//+(void)get_all_bundle_id;

//检查网络连接 不能联网弹出提示框
//+(BOOL)checkNetStatusOrAlert;

@end
