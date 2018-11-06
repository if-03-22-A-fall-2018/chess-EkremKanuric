/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
 #include "chess.h"
 bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type){
   return pc.color == color && pc.type == type;
 }
 void 	init_chess_board (ChessBoard chess_board){

 }
 struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank){
   struct ChessSquare x;
   return &x;
 }
 bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank){
   return true;
 }
 bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece){
   return true;
 }
 struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank){
   struct ChessPiece x;
   return x;
 }
 void 	setup_chess_board (ChessBoard chess_board){

 }
 bool 	remove_piece (ChessBoard chess_board, File file, Rank rank){
   return true;
 }
 bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
 bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
 bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
 bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
 bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
 bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
 bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return true;
 }
