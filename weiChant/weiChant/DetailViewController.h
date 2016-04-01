//
//  DetailViewController.h
//  weiChant
//
//  Created by gongjinbo on 16/4/1.
//  Copyright © 2016年 gongjinbo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

