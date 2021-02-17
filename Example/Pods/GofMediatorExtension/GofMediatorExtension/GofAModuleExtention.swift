//
//  GofAModuleExtention.swift
//  Extension 方式调用 OC 模块
//
//  Created by 李高峰 on 2021/2/17.
//  Copyright © 2021 CocoaPods. All rights reserved.
//

import GofMediator

public extension GofMediator {
    @objc func gof_showAModuleVC(callback:@escaping (String) -> Void) -> UIViewController? {
        let callbackBlock = callback as @convention(block) (String) -> Void
        let callbackBlockObject = unsafeBitCast(callbackBlock, to: AnyObject.self)
        let params = ["callBack":callbackBlockObject] as [AnyHashable:Any]
        if let viewController = self.gof_performNative(withTarget: "A", action: "AViewCtrl", params: params) as? UIViewController {
            return viewController;
        }
        return nil
    }
}
