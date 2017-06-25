//
//  BulletView.h
//  弹幕的实现
//
//  Created by Yang on 2017/6/16.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class user;
//弹幕的13种状态   开始   全部进去   全部出去
typedef NS_ENUM(NSInteger,MoveStatus) {
    start,
    enter,
    end
};
@interface BulletView : UIView
//view模型数据
@property(nonatomic,strong)user * model;
//弹道   第几行显示
@property(nonatomic,assign)int dandao;
//弹幕状态
@property(nonatomic,copy)void(^moveStatusBlock)(MoveStatus status);
//开始动画
-(void)startAnimate;
//结束动画
-(void)endAnimate;
@end
