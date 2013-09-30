//
//  MasterViewController.h
//  NewRSSReader
//
//  Created by Michael Crump on 9/17/13.
//  Copyright (c) 2013 Michael Crump. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSDate+InternetDateTime.h"

@interface MasterViewController : UITableViewController <NSXMLParserDelegate>
{
    BOOL isTitleElement;
    BOOL isEntryElement;
}
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end
