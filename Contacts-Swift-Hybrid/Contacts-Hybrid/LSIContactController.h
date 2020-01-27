//
//  LSIContactController.h
//  Contacts-Hybrid
//
//  Created by Niranjan Kumar on 1/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Contact; // forwrd declare the Swift class
//@class LSIContact;

NS_SWIFT_NAME(ContactController)
@interface LSIContactController : NSObject

// 1. Lightweight generics
// 2. Nullability
// 3. Change names of classes (Bug: going back and forth)

@property (nonatomic, readonly, nonnull) NSArray <Contact *> *contacts;

/*
 
 * nullable - Optional in Swift (nil or value)
 * nonnull - Not an Optional (can never be nil)
 * nil_resettable - UITextField.text = nil (Sets the text to the empty string "")
 * nil_unspecified - Default (Implicitly unwrapped optional)
 
 */

@end

