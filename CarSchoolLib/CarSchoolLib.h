//
//  CarSchoolLib.h
//  CarSchoolLib
//
//  Created by 程宜 on 2016/10/10.
//  Copyright © 2016年 ChengYi. All rights reserved.
//


@interface CarSchoolLib : NSObject

///需要设置tabBar的时候先调用该方法设置每个子tabBar的title和图片
+ (UINavigationController *)setTabBarViewControlller:(UIViewController *)vc withSelectedImageName:(NSString *)selectedImageName withNormalImageName:(NSString *)normalImageName andTitle:(NSString *)strTitle;

///设置主视图tabBar Window
+ (CYTabBarViewController *)setRootViewController:(NSMutableArray *)arrayController;

///设置引导页
+ (PageGuideViewController *)setPageGuideView:(NSMutableArray *)arrayPages;

+ (void) setNavBarColor:(UINavigationController *)controller andColor:(UIColor *)color;




@end
