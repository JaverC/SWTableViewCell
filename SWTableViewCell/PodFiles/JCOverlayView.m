//
//  JCOverlayView.m
//  SWTableViewCell
//
//  Created by JaverC on 4/21/15.
//  Copyright (c) 2015 Chris Wendel. All rights reserved.
//

#import "JCOverlayView.h"

@implementation JCOverlayView

- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event
{
    return [self.delegate overlayView:self didHitTest:point withEvent:event];
}

@end
