//
//  DirectoryBrowserTableViewController.h
//  DirectoryBrowser
//
//  Created by Matt Piscopo on 07/06/2014.
//  Copyright (c) 2014 Matt Piscopo. All rights reserved.
//

#import <UIKit/UIKit.h>

@import MessageUI;
@import CoreLocation;

@interface DirectoryBrowserTableViewController : UITableViewController <MFMailComposeViewControllerDelegate> {
	
@private
	
	NSString *_path;
	
	NSArray *_files;
	
}

@property (strong) NSString *path;

@end
