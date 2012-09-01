//#import "Box2D.h"
#import "cocos2d.h"
#import "GLES-Render.h"
#import "LayerMgr.h"
#import "MyContactListener.h"
#import "PlayerNode.h"
#import "Level.h"

#define PTM_RATIO 32.0

@interface HelloWorldLayer : CCLayerColor {
    
@private
    b2World *_world;
    
    CCSpriteBatchNode *_spriteSheet;
    GLESDebugDraw *_debugDraw;
    MyContactListener *_contactListener;
    
    
    
    PlayerNode *_player;
    
    LayerMgr *_layerMgr;
    
    bool _inCross;
    bool _hasInit;
    
    NSMutableArray *_rivers;
    NSMutableArray *_bridges;
    NSMutableArray *_houses;
    
    CCDirectorIOS	*director_;							// weak ref
}

+ (id) scene;

@property (nonatomic, retain) PlayerNode *player;
@property (nonatomic, retain) Level *currentLevel;



@end