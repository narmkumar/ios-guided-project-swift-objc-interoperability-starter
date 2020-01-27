//
//  LSIContactController.h
//  Contacts-Hybrid
//
//  Created by Niranjan Kumar on 1/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Contact; // forwrd declare the Swift class

@interface LSIContactController : NSObject

// 1. Lightweight generics
// 2. Change names of classes (Bug: going back and forth)

@property (nonatomic, readonly) NSArray <Contact *> *contacts;

@end

