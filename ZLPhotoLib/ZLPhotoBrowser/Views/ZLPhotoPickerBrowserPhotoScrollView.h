//
//  ZLPhotoPickerBrowserPhotoScrollView.h
//  ZLAssetsPickerDemo
//
//  Created by 张磊 on 14-11-14.
//  Copyright (c) 2014年 com.zixue101.www. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZLPhotoPickerBrowserPhotoImageView.h"
#import "ZLPhotoPickerBrowserPhotoView.h"
#import "ZLPhotoPickerBrowserPhoto.h"
#import "ZLPhoto.h"

@class ZLPhotoPickerBrowserPhotoScrollView;

@protocol ZLPhotoPickerPhotoScrollViewDelegate <NSObject>
@optional
// 单击调用
- (void) pickerPhotoScrollViewDidSingleClick:(ZLPhotoPickerBrowserPhotoScrollView *)photoScrollView;
@end

@interface ZLPhotoPickerBrowserPhotoScrollView : UIScrollView <UIScrollViewDelegate, ZLPhotoPickerBrowserPhotoImageViewDelegate,ZLPhotoPickerBrowserPhotoViewDelegate>

@property (nonatomic,strong) ZLPhotoPickerBrowserPhoto *photo;
@property (nonatomic, weak) id <ZLPhotoPickerPhotoScrollViewDelegate> photoScrollViewDelegate;
// 长按图片的操作，可以外面传入
@property (strong,nonatomic) UIActionSheet *sheet;
// 单击销毁的block
@property (copy,nonatomic) callBackBlock callback;

@end
