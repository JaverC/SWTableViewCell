//
//  JCOverlayView.h
//  SWTableViewCell
//
//  Created by JaverC on 4/21/15.
//  Copyright (c) 2015 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JCOverlayView;

@protocol JCOverlayViewDelegate <NSObject>

- (UIView *)overlayView:(JCOverlayView *)view didHitTest:(CGPoint)point withEvent:(UIEvent *)event;

@end

@interface JCOverlayView : UIView

@property (weak, nonatomic) id <JCOverlayViewDelegate> delegate;

@end
