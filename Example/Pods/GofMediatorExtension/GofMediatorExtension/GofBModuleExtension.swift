//
//  GofBModuleExtension.swift
//  Extension 方式调用 Swift 模块
//
//  Created by 李高峰 on 2021/2/17.
//  Copyright © 2021 CocoaPods. All rights reserved.
//

import GofMediator

public extension GofMediator {
    @objc func gof_showBModuleVC(callback:@escaping (String) -> Void) -> UIViewController? {
        let params = [
            "callBack":callback,
            kMediatorSwiftModuleNameKey:"GofBModule"
            ] as [AnyHashable : Any]
        if let viewController = self.gof_performNative(withTarget:"B", action: "ExtensionBViewCtrl", params: params) as? UIViewController {
            return viewController
        }
        return nil
    }
}
