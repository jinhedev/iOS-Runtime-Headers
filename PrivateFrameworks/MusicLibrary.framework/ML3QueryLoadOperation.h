/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Query, NSLock;



@interface ML3QueryLoadOperation : NSOperation 
{
    ML3Query *_query;
    struct sqlite3_stmt { } *_statement;
    NSLock *_statementLock;
}

@property sqlite3_stmt *statement;
@property(retain) ML3Query *query;


- (void)cancel;
- (id)query;
- (void)dealloc;
- (struct sqlite3_stmt { }*)statement;
- (void)setStatement:(struct sqlite3_stmt { }*)arg1;
- (void)setQuery:(id)arg1;
- (id)initWithQuery:(id)arg1;

@end