//
//  CollectionViewController.h
//  CollectionViewSample
//
//  Created by paradigm creatives on 9/25/14.
//  Copyright (c) 2014 Paradigm Creatives. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CollectionViewController : UICollectionViewController<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>
@property(nonatomic,strong) NSArray *imgs;

@end
