/* IL2CPP: NicknameSheet.Row$$GetValues
System_Collections_Generic_List_string__o* NicknameSheet_Row__GetValues (NicknameSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NicknameSheet.Row$$GetValues
   System_Collections_Generic_List_string__o* NicknameSheet_Row__GetValues (NicknameSheet_Row_o*
   __this, const MethodInfo* method); */

long NicknameSheet_Row__GetValues_2564d2c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
                    /* try { // try from 02664d30 to 02764d3f has its CatchHandler @ 02665288 */
                    /* try { // try from 02664d40 to 02764d4b has its CatchHandler @ 02665284 */
  if ((bRam0000000004f4c14c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4138);
                    /* try { // try from 02664d58 to 02764d67 has its CatchHandler @ 02665280 */
    FUN_021f03f8(PTR_DAT_049b4120);
                    /* try { // try from 02664d68 to 02764d73 has its CatchHandler @ 0266527c */
    FUN_021f03f8(PTR_DAT_049b4118);
    bRam0000000004f4c14c = 1;
  }
                    /* try { // try from 02664d74 to 02764d7b has its CatchHandler @ 02665278 */
  plVar7 = (long *)(param_1 + 0x28);
  lVar3 = *plVar7;
  if (lVar3 == 0) {
                    /* try { // try from 02664d8c to 02764d9b has its CatchHandler @ 02665274 */
    uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4118);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (uVar4,*(undefined8 *)PTR_DAT_049b4120);
                    /* try { // try from 02664da8 to 02764db3 has its CatchHandler @ 02665270 */
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    thunk_FUN_021f190c(plVar7,uVar4);
                    /* try { // try from 02664db4 to 02764dbf has its CatchHandler @ 0266526c */
    uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x20),0);
                    /* try { // try from 02664dc0 to 02764dcb has its CatchHandler @ 02665268 */
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 02664dd8 to 02764de3 has its CatchHandler @ 02665264 */
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (auVar9 = System_String__Split_2f802dc(*(long *)(param_1 + 0x20),0x2c,0,0),
         puVar2 = PTR_DAT_049b4138, lVar3 = auVar9._0_8_, lVar3 == 0)) {
LAB_02664e60:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02664e60 to 02764e67 has its CatchHandler @ 02665244 */
        FUN_021f06a0();
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 02664de4 to 02764def has its CatchHandler @ 02665260 */
      if (0 < (int)uVar1) {
                    /* try { // try from 02664df0 to 02764df7 has its CatchHandler @ 0266525c */
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8(auVar9._0_8_,auVar9._8_8_);
          }
                    /* try { // try from 02664e08 to 02764e13 has its CatchHandler @ 02665258 */
          lVar6 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
                    /* try { // try from 02664e14 to 02764e1f has its CatchHandler @ 02665254 */
          if ((lVar6 == 0) ||
             (lVar6 = System_String__Trim_2f8204c(lVar6,0), auVar9._8_8_ = lVar6,
             auVar9._0_8_ = lVar6, lVar6 == 0)) goto LAB_02664e60;
                    /* try { // try from 02664e28 to 02764e33 has its CatchHandler @ 02665250 */
          if (0 < *(int *)(lVar6 + 0x10)) {
            if (*plVar7 == 0) goto LAB_02664e60;
            auVar9 = FUN_02333498(*plVar7,lVar6,*(undefined8 *)puVar2);
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar8 = uVar8 + 1;
                    /* try { // try from 02664e44 to 02764e53 has its CatchHandler @ 0266524c */
        } while ((int)uVar8 < (int)uVar1);
      }
    }
    lVar3 = *plVar7;
  }
                    /* try { // try from 02664e54 to 02764e5f has its CatchHandler @ 02665248 */
  return lVar3;
}

