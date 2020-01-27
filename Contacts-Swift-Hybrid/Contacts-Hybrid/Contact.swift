//
//  Contact.swift
//  Contacts-Hybrid
//
//  Created by Niranjan Kumar on 1/27/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

// Question: Why did we use a class?
// (look at beginning of lecture, basically need a class in swift for ObjC to work

import Foundation

// Question: Why did we use a class?
// struct fro
// (look at beginning of lecture, basically need a class in swift for ObjC to work

@objc class Contact: NSObject {
    @objc var name: String
    @objc var relationship: String?
    @objc init(name: String, relationship: String?) {
        self.name = name
        self.relationship = relationship
    }
}
