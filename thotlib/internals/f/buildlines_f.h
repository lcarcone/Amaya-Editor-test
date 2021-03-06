/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern PtrBox GetNextBox ( PtrAbstractBox pAb,
                           int frame );
extern int FloatToInt ( float e );
extern void ClearFloats ( PtrBox pBox );
extern void ClearAFloat ( PtrAbstractBox pAb );
extern void ShiftFloatingBoxes ( PtrBox pBlock,
                                 int delta,
                                 int frame );
extern int SetFloat ( PtrBox box,
                      PtrBox pBlock,
                      PtrLine pLine,
                      PtrAbstractBox pRootAb,
                      int maxWidth,
                      ThotBool extensibleBlock,
                      ThotBool xAbs,
                      ThotBool yAbs,
                      ThotBool notComplete,
                      ThotBool onlySpace,
                      ThotBool *full,
                      ThotBool *adjust,
                      ThotBool *breakLine,
                      ThotBool *newblock,
                      int frame,
                      int indent,
                      int top,
                      int bottom,
                      int left,
                      int right,
                      PtrBox *floatL,
                      PtrBox *floatR );
extern void ComputeLines ( PtrBox pBox,
                           int frame,
                           int *height );
extern void RemoveLines ( PtrBox pBox,
                          int frame,
                          PtrLine pFirstLine,
                          ThotBool removed,
                          ThotBool *changeSelectBegin,
                          ThotBool *changeSelectEnd );
extern ThotBool RecomputeLines ( PtrAbstractBox pAb,
                                 PtrLine pFirstLine,
                                 PtrBox ibox,
                                 int frame );
extern void UpdateLineBlock ( PtrAbstractBox pAb,
                              PtrLine pLine,
                              PtrBox pBox,
                              int xDelta,
                              int spaceDelta,
                              int frame );
extern void EncloseInLine ( PtrBox pBox,
                            int frame,
                            PtrAbstractBox pAb );

#else /* __STDC__ */

extern PtrBox GetNextBox ( PtrAbstractBox pAb,
                             int frame );
extern int FloatToInt ( float e );
extern void ClearFloats ( PtrBox pBox );
extern void ClearAFloat ( PtrAbstractBox pAb );
extern void ShiftFloatingBoxes ( PtrBox pBlock,
                                   int delta,
                                   int frame );
extern int SetFloat ( PtrBox box,
                        PtrBox pBlock,
                        PtrLine pLine,
                        PtrAbstractBox pRootAb,
                        int maxWidth,
                        ThotBool extensibleBlock,
                        ThotBool xAbs,
                        ThotBool yAbs,
                        ThotBool notComplete,
                        ThotBool onlySpace,
                        ThotBool *full,
                        ThotBool *adjust,
                        ThotBool *breakLine,
                        ThotBool *newblock,
                        int frame,
                        int indent,
                        int top,
                        int bottom,
                        int left,
                        int right,
                        PtrBox *floatL,
                        PtrBox *floatR );
extern void ComputeLines ( PtrBox pBox,
                             int frame,
                             int *height );
extern void RemoveLines ( PtrBox pBox,
                            int frame,
                            PtrLine pFirstLine,
                            ThotBool removed,
                            ThotBool *changeSelectBegin,
                            ThotBool *changeSelectEnd );
extern ThotBool RecomputeLines ( PtrAbstractBox pAb,
                                   PtrLine pFirstLine,
                                   PtrBox ibox,
                                   int frame );
extern void UpdateLineBlock ( PtrAbstractBox pAb,
                                PtrLine pLine,
                                PtrBox pBox,
                                int xDelta,
                                int spaceDelta,
                                int frame );
extern void EncloseInLine ( PtrBox pBox,
                              int frame,
                              PtrAbstractBox pAb );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
