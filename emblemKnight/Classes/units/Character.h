//
//  Character.h
//  emblemKnight
//
//  Created by Administrator on 4/20/14.
//  Copyright 2014 Administrator. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "GameManager.h"

@interface Character : CCSprite {
    
}
@property (nonatomic,strong)NSString *name;
@property (nonatomic,strong)CharacterObject *characterObject;


@property (nonatomic,strong)CCSpriteFrame *originalFrame;

-(void)addMoveAnimationWithTextPointInSheet:(CGPoint)spritePoint;
-(void)stopMoveAnimation;

-(void)addBattleMoveAnimationWithTextPointInSheet:(CGPoint)spritePoint;
-(void)stopBattleMoveAnimation;

-(CCSpriteFrame *)getBattleDieSpriteWithName:(NSString *)name andTextPointInSheet:(CGPoint)spritePoint;
@end
