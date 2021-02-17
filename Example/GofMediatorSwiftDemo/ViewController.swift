//
//  ViewController.swift
//  GofMediatorSwiftDemo
//
//  Created by 279352257@qq.com on 02/17/2021.
//  Copyright (c) 2021 279352257@qq.com. All rights reserved.
//

import UIKit
import GofMediator
import GofMediatorExtension
import GofMediatorCategory

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        view.addSubview(tableView)
    }
    
    // MARK: 懒加载
    lazy var tableView : UITableView = {
        let _rect = CGRect(x: 0, y: 0, width: view.frame.size.width, height: 300)
        let _tableView = UITableView(frame: _rect, style: .plain)
        _tableView.delegate = self
        _tableView.dataSource = self
        _tableView.register(UITableViewCell.self, forCellReuseIdentifier: "cell")
        return _tableView
    }()

    lazy var dataSource = [
        "Swift 扩展方式调用 Swift 组件库",
        "Swift 扩展方式调用 OC 组件库",
        "Swift 分类方式调用 Swift 组件库",
        "Swift 分类方式调用 OC 组件库"
    ]
}

extension ViewController: UITableViewDelegate, UITableViewDataSource {
    // MARK: UITableViewDelegate
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if indexPath.row == 0 {
            // Swift 扩展方式调用 Swift 组件库
            let vc = GofMediator.sharedInstance().gof_showBModuleVC{ (result) in
                print(result)
            }
            navigationController?.pushViewController(vc!, animated: true)
        }
        
        if indexPath.row == 1 {
            // Swift 扩展方式调用 OC 组件库
            let vc = GofMediator.sharedInstance().gof_showAModuleVC { (result) in
                print(result)
            }
            navigationController?.pushViewController(vc!, animated: true)
        }
        
        if indexPath.row == 2 {
            // Swift 分类方式调用 Swift 组件库
            let vc = GofMediator.sharedInstance().gof_BViewController{ (result) in
                print(result)
            }
            
            navigationController?.pushViewController(vc, animated: true)
        }
        
        if indexPath.row == 3 {
            // Swift 分类方式调用 OC 组件库
            let vc = GofMediator.sharedInstance().gof_AViewController { (result) in
                print(result)
            }
            navigationController?.pushViewController(vc, animated: true)
        }
    }
    
    func tableView(_ tableView: UITableView, willDisplay cell: UITableViewCell, forRowAt indexPath: IndexPath) {
        cell.textLabel?.text = dataSource[indexPath.row]
    }

    // MARK: UITableViewDataSource
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return dataSource.count
    }

    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        return tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)
    }
}

