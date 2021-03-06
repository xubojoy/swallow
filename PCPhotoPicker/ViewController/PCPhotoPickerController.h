//
//  PCPhotoPickerController.h
//  PCPhotoPicker
//
//  Created by 陈 荫华 on 2017/2/3.
//  Copyright © 2017年 陈 荫华. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PCPhotoPickerController : UINavigationController
@property (assign, nonatomic)NSUInteger maxSelectCount;

- (instancetype)initWithMaxSelectCount:(NSUInteger)maxCount;
@end
