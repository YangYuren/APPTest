//
//  BulletManager.h
//  弹幕的实现
//
//  Created by Yang on 2017/6/16.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BulletView;
@interface BulletManager : NSObject

@property(nonatomic,copy) void(^generateViewBlock)(BulletView * view);
//初始化数据源方法
-(instancetype)initWithDataSource:(NSArray *)dataSource;
//开始动画
-(void)start;
//结束动画
-(void)end;

@end
