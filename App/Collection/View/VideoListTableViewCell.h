//
//  VideoListTableViewCell.h
//  App
//
//  Created by 张丁豪 on 16/9/7.
//  Copyright © 2016年 张丁豪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoListTableViewCell : UITableViewCell

/** 图片 */
@property (nonatomic, weak) UIImageView *ImageView;

@property (nonatomic, weak) UIImageView *shadeView;

/** 标题 */
@property (nonatomic, weak) UILabel *titleLabel;

/** Message */
@property (nonatomic, weak) UILabel *messageLabel;

@end
