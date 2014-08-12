//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Tom Daggett on 2014-08-12.
//  Copyright (c) 2014 Tom Daggett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
