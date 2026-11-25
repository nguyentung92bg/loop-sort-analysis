/* IL2CPP: AnalyticsModule$$GetUserInfo
AnalyticsUserInfo_o AnalyticsModule__GetUserInfo (AnalyticsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$GetUserInfo
   AnalyticsUserInfo_o AnalyticsModule__GetUserInfo (AnalyticsModule_o* __this, const MethodInfo*
   method); */

void AnalyticsModule__GetUserInfo_253fc84(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bfb5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
                    /* try { // try from 0263fcb4 to 0273fcbf has its CatchHandler @ 0263fd84 */
    bRam0000000004f4bfb5 = 1;
  }
  plVar5 = *(long **)(param_2 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 0263fd08 to 0273fd17 has its CatchHandler @ 0263fd64 */
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar2 = *plVar5;
                    /* try { // try from 0263fccc to 0273fcdb has its CatchHandler @ 0263fd80 */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
                    /* try { // try from 0263fd1c to 0273fd1f has its CatchHandler @ 0263fe68 */
                    /* try { // try from 0263fd20 to 0273fd23 has its CatchHandler @ 0263fe60 */
                    /* try { // try from 0263fd24 to 0273fd27 has its CatchHandler @ 0263fe58 */
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x13) * 0x10 + 0x138);
          goto LAB_0263fd28;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 0263fcf0 to 0273fcfb has its CatchHandler @ 0263fd68 */
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0x13);
LAB_0263fd28:
                    /* try { // try from 0263fd28 to 0273fd2b has its CatchHandler @ 0263fe44 */
                    /* try { // try from 0263fd2c to 0273fd2f has its CatchHandler @ 0263fe3c */
                    /* try { // try from 0263fd30 to 0273fd33 has its CatchHandler @ 0263fe4c */
                    /* try { // try from 0263fd34 to 0273fd37 has its CatchHandler @ 0263fe10 */
    (*(code *)*puVar1)(&uStack_48,plVar5,puVar1[1]);
                    /* try { // try from 0263fd38 to 0273fd3b has its CatchHandler @ 0263fde8 */
                    /* try { // try from 0263fd3c to 0273fd3f has its CatchHandler @ 0263fe38 */
                    /* try { // try from 0263fd40 to 0273fd43 has its CatchHandler @ 0263fe34 */
                    /* try { // try from 0263fd44 to 0273fd47 has its CatchHandler @ 0263fe30 */
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
                    /* try { // try from 0263fd48 to 0273fd4b has its CatchHandler @ 0263fddc */
    param_1[4] = uStack_28;
  }
                    /* try { // try from 0263fd4c to 0273fd53 has its CatchHandler @ 0263fdfc */
                    /* try { // try from 0263fd54 to 0273fd57 has its CatchHandler @ 0263fdd8 */
                    /* try { // try from 0263fd58 to 0273fd5b has its CatchHandler @ 0263fdf4 */
  return;
}

