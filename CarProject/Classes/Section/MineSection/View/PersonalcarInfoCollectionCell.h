//
//  PersonalcarInfoCollectionCell.h
//  CarProject
//
//  Created by 董诗磊 on 2017/4/21.
//  Copyright © 2017年 董诗磊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PersonalcarInfoCollectionCell : UICollectionViewCell

@property (nonatomic ,strong) PersonalCarInfoModel * model;

@property (nonatomic ,strong) UILabel * titleLable;

@property (nonatomic ,strong) UILabel * contentLable;


@end
