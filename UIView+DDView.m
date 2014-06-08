//
//  UIView+DDView.m
//  WenStore
//
//  Created by ccxdd on 14-6-5.
//  Copyright (c) 2014年 ccxdd. All rights reserved.
//

#import "UIView+DDView.h"
#import <QuartzCore/QuartzCore.h>

@implementation UIView (DDView)

- (CGFloat)x1
{
    return CGRectGetMinX(self.frame);
}

- (CGFloat)x2
{
    return CGRectGetMaxX(self.frame);
}

- (CGFloat)y1
{
    return CGRectGetMinY(self.frame);
}

- (CGFloat)y2
{
    return CGRectGetMaxY(self.frame);
}

- (CGFloat)width
{
    return CGRectGetWidth(self.frame);
}

- (CGFloat)height
{
    return CGRectGetHeight(self.frame);
}

- (CGFloat)midX
{
    return CGRectGetMidX(self.frame);
}

- (CGFloat)midY
{
    return CGRectGetMidY(self.frame);
}

- (void)setX:(CGFloat)x
{
    self.frame = CGRectMake(x, CGRectGetMinY(self.frame), CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
}

- (void)setY:(CGFloat)y
{
    self.frame = CGRectMake(CGRectGetMinX(self.frame), y, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
}

- (void)setX:(CGFloat)x y:(CGFloat)y;
{
    self.frame = CGRectMake(x, y, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame));
}

- (void)setWidth:(CGFloat)width
{
    self.frame = CGRectMake(CGRectGetMinX(self.frame), CGRectGetMinY(self.frame), width, CGRectGetHeight(self.frame));
}

- (void)setHeight:(CGFloat)height
{
    self.frame = CGRectMake(CGRectGetMinX(self.frame), CGRectGetMinY(self.frame), CGRectGetWidth(self.frame), height);
}

- (void)setWidth:(CGFloat)width height:(CGFloat)height;
{
    self.frame = CGRectMake(CGRectGetMinX(self.frame), CGRectGetMinY(self.frame), width, height);
}

- (void)setCornerRadius:(CGFloat)radius
{
    self.layer.cornerRadius = radius;
}

- (void)setBorderColor:(UIColor *)borderColor width:(CGFloat)width
{
    self.layer.borderColor = borderColor.CGColor;
    self.layer.borderWidth = width;
}

@end