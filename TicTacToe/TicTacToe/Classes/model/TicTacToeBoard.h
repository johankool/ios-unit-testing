#import <Foundation/Foundation.h>

#import "GameStates.h"

@interface TicTacToeBoard : NSObject

// Returns the state of the game: not ended, O wins, X wins, or tie.
@property(nonatomic, readonly) TicTacToeGameStateType gameState;

// Returns the state of the square at the given position on the board.
// Invalid posions will return TicTacToeStateInvalid.
- (TicTacToeStateType)stateForXPos:(int)x yPos:(int)y;

// Attempts to play in the position (x,y). Returns YES for success, NO if not.
- (BOOL)playXPos:(int)x
            yPos:(int)y
         toState:(TicTacToeStateType)state;

@end
