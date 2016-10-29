//
//  CustemCCPlayer.h
//  CarSchool
//
//  Created by 程宜 on 16/9/19.
//  Copyright © 2016年 chengyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ExamModel.h"
#import "VideoDetialModel.h"

@protocol CustemCCPlayerDelegate <NSObject>

-(void)pushToExam:(ExamModel *)detialExam;

-(void)changeToSmall;

-(void)changeToFull;

-(void)palyEnd;

@end

@interface CustemCCPlayer : UIView

@property(nonatomic , strong) NSString *videoId;
@property (copy, nonatomic)NSString *videoLocalPath;

@property(nonatomic,unsafe_unretained) id <CustemCCPlayerDelegate> delegate;


@property (nonatomic, strong) VideoDetialModel * detialModel;

@property (nonatomic, strong) NSString * currentTimes;

@property (nonatomic, strong) NSString * strSectionID;

@property (nonatomic, strong) NSString * strClassID;




-(void)stop;

-(void)play;

-(void)pause;

@end
