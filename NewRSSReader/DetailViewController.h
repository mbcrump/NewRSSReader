//
//  DetailViewController.h
//  NewRSSReader
//
//  Created by Michael Crump on 9/17/13.
//  Copyright (c) 2013 Michael Crump. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSString *url;
@property (weak, nonatomic) IBOutlet UIWebView *webView;


@end
