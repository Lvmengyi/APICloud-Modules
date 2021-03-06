/**
 * APICloud Modules
 * Copyright (c) 2014-2018 by APICloud, Inc. All Rights Reserved.
 * Licensed under the terms of the The MIT License (MIT).
 * Please see the license.html included with this distribution for details.
 */

#import <UIKit/UIKit.h>


@interface PhotoBrowseCell : UICollectionViewCell

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

/// 单击执行的block
@property (nonatomic, copy, nullable)void(^ritl_PhotoBrowerSimpleTapHandleBlock)(id);


@end


