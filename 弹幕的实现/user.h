//
//  user.h
//  弹幕的实现
//
//  Created by Yang on 2017/6/16.
//  Copyright © 2017年 Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface user : NSObject
//评论内容
@property(nonatomic,copy)NSString * comment;
//用户头像
@property(nonatomic,copy)NSString * iconUrl;
//点赞数
@property(nonatomic,assign)int *zan;
@end
