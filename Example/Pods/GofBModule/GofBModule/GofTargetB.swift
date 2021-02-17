//
//  GofTargetB.swift
//  GofBModule_Example
//
//  Created by 李高峰 on 2021/2/16.
//  Copyright © 2021 CocoaPods. All rights reserved.
//

import UIKit

@objc class GofTargetB: NSObject {
    @objc func action_ExtensionBViewCtrl(_ params:NSDictionary) -> UIViewController {
        if let callback = params["callBack"] as? (String) -> Void {
            callback("success")
        }

        let vc = GofBViewController()
        return vc
    }
    
    @objc func action_CategoryBViewCtrl(_ params:NSDictionary) -> UIViewController {
        if let block = params["callBack"] {
            
            typealias CallbackType = @convention(block) (NSString) -> Void
            let blockPtr = UnsafeRawPointer(Unmanaged<AnyObject>.passUnretained(block as AnyObject).toOpaque())
            let callback = unsafeBitCast(blockPtr, to: CallbackType.self)
            
            callback("success")
        }

        let vc = GofBViewController()
        return vc
    }
}
