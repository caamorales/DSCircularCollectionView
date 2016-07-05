//
//  DSCircularLayout.h
//  DSCircularCollectionViewExample
//
//  Created by Srinivasan Dodda on 04/07/16.
//  Copyright © 2016 Srinivasan Dodda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSCircularLayout : UICollectionViewLayout

@property (nonatomic, assign) CGPoint centre;

@property (nonatomic, assign) CGFloat radius;

@property (nonatomic, assign) CGSize itemSize;

@property (nonatomic, assign) CGFloat angularSpacing;

@property (nonatomic, assign) UICollectionViewScrollDirection scrollDirection;

-(void)initWithCentre:(CGPoint)centre radius:(CGFloat)radius itemSize:(CGSize)itemSize andAngularSpacing:(CGFloat)angularSpacing;

@end