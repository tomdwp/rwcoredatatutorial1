//
//  FailedBankDetails.h
//  FailedBankCD
//
//  Created by Tom Daggett on 2014-08-12.
//  Copyright (c) 2014 Tom Daggett. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankInfo;

@interface FailedBankDetails : NSManagedObject

@property (nonatomic, retain) NSNumber * zip;
@property (nonatomic, retain) NSDate * closeDate;
@property (nonatomic, retain) NSDate * updateDate;
@property (nonatomic, retain) FailedBankInfo *info;

@end
