//
//  LSIContactController.m
//  Contacts-Hybrid
//
//  Created by Niranjan Kumar on 1/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "LSIContactController.h"
#import "Contacts_Hybrid-Swift.h" // "ProjectName-Swift.h" Spaces/Special characters = "_"

@implementation LSIContactController

- (instancetype)init {
    self = [super init];
    if (self) {
        _contacts = @[
            // How do Iuse code in Objective-C
            [[Contact alloc] initWithName:@"Niranjan" relationship:@"myself"],
            [[Contact alloc] initWithName:@"Nidhi" relationship:@"girlfriend"]
        ];
    }
    return self;
}

@end
