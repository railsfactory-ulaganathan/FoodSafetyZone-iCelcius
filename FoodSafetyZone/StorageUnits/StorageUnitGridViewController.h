//
//  StorageUnitGridViewController.h
//  FoodSafetyZone
//
//  Created by railsfactory on 29/08/13.
//  Copyright (c) 2013 railsfactory. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DBManager.h"
#import "GridViewCell.h"
#import "AddRecordsStorageUnitViewController.h"
#import <QuartzCore/QuartzCore.h>
#import <iCelsiusAPIPack/iCelsiusAPI.h>
@interface StorageUnitGridViewController : UIViewController<UISearchBarDelegate,UIAlertViewDelegate,UIGestureRecognizerDelegate,DataProtocol>
{
    NSMutableArray	*filteredListContent;
    NSMutableArray  *filteredImagesList;
    NSMutableArray	*listContent;
    NSMutableArray  *ImagesList;
    
    NSString		*savedSearchTerm;
    NSInteger		savedScopeButtonIndex;
    BOOL			searchWasActive;
    DBManager *dbmanager;
    iCelsiusAPI* iCelsius;
    NSString *selStorageName;
    NSString *selStorageUnitType;
    NSString *selAlertMes;
    UIImage *selStorageImage;
    NSString *scanedtemp;
}

@property (strong, nonatomic) IBOutlet UISearchBar *search;
@property (nonatomic, retain) NSMutableArray *filteredListContent;
@property (nonatomic, retain) NSMutableArray *filteredImagesList;
@property (nonatomic, retain) NSMutableArray *listContent;
@property (nonatomic, retain) NSMutableArray *ImagesList;

@property (nonatomic, copy) NSString *savedSearchTerm;
@property (nonatomic) NSInteger savedScopeButtonIndex;
@property (nonatomic) BOOL searchWasActive;
@property (strong, nonatomic) IBOutlet UIScrollView *mainScroll;

@end
