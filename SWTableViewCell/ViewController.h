//
//  ViewController.h
//  SWTableViewCell
//
//  Created by Chris Wendel on 9/10/13.
//  Copyright (c) 2013 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"
#import "JCOverlayView.h"

@interface ViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, SWTableViewCellDelegate, JCOverlayViewDelegate>


/*
 * add by JaverC
 */
@property (nonatomic, strong) SWTableViewCell *cellDisplayingUtilityButtons;
@property (nonatomic, strong) JCOverlayView *overlayView;
@property (nonatomic, assign) BOOL cellDisplaying;
@property (nonatomic, assign) BOOL shouldInterceptTouches;

@end
