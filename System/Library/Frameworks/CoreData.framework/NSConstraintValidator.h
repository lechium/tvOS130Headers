/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PFModelMap, NSArray;

@interface NSConstraintValidator : NSObject {

	_PFModelMap* _modelMap;
	NSArray* _entities;
	id* _cachesByEntity;

}
-(void)dealloc;
-(void)reset;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)registerObjects:(id)arg1 ;
-(id)validateForSave;
-(void)registerObject:(id)arg1 ;
-(id)validateCaches;
-(void)_addConstraintRoot:(id)arg1 forEntity:(id)arg2 ;
@end

