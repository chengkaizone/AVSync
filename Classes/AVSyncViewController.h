//
//  AVSyncViewController.h
//  AVSync
//
//  Created by Moses DeJong on 5/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVAnimatorView;
@class MovieControlsViewController;
@class MovieControlsAdaptor;

@interface AVSyncViewController : UIViewController {
  UIWindow *m_window;
  UIButton *m_slowButton;
  UIButton *m_fastButton;
  AVAnimatorView *m_animatorView;
  MovieControlsViewController *m_movieControlsViewController;
  MovieControlsAdaptor *m_movieControlsAdaptor;
}

@property(nonatomic, retain) UIWindow *window;
@property(nonatomic, retain) IBOutlet UIButton *slowButton;
@property(nonatomic, retain) IBOutlet UIButton *fastButton;
@property (nonatomic, retain) AVAnimatorView *animatorView;
@property (nonatomic, retain) MovieControlsViewController *movieControlsViewController;
@property (nonatomic, retain) MovieControlsAdaptor *movieControlsAdaptor;

- (IBAction) doSlowButton:(id)target;
- (IBAction) doFastButton:(id)target;

@end

