/* IL2CPP: ColorType$$.ctor
void ColorType___ctor (ColorType_o __this, System_String_o* color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ColorType$$.ctor
   void ColorType___ctor (ColorType_o __this, System_String_o* color, const MethodInfo* method); */

void ColorType___ctor_24f9be0(undefined4 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bd3f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c88a8);
    FUN_021f03f8(PTR_DAT_049c88b0);
                    /* try { // try from 025f9c20 to 026f9c23 has its CatchHandler @ 025f9c94 */
    FUN_021f03f8(PTR_DAT_049c88b8);
                    /* try { // try from 025f9c24 to 026f9c2b has its CatchHandler @ 025f9c7c */
                    /* try { // try from 025f9c2c to 026f9c2f has its CatchHandler @ 025f9c70 */
    FUN_021f03f8(PTR_DAT_049c88c0);
                    /* try { // try from 025f9c30 to 026f9c33 has its CatchHandler @ 025f9c6c */
                    /* try { // try from 025f9c34 to 026f9c3f has its CatchHandler @ 025f9328 */
    FUN_021f03f8(PTR_DAT_049c6290);
                    /* catch() { ... } // from try @ 025f986c with catch @ 025f9c3c */
                    /* try { // try from 025f9c40 to 026f9c5f has its CatchHandler @ 025f9cd4 */
    bRam0000000004f4bd3f = 1;
  }
  uStack_24 = 0;
  param_1[1] = 0;
  puVar3 = PTR_DAT_049c88b8;
                    /* catch() { ... } // from try @ 025f984c with catch @ 025f9c4c */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 025f9bc0 with catch @ 025f9c50 */
                    /* try { // try from 025f9c60 to 026f9cb7 has its CatchHandler @ 025f9328 */
                    /* catch() { ... } // from try @ 025f9b20 with catch @ 025f9c64 */
                    /* catch() { ... } // from try @ 025f9ae4 with catch @ 025f9c68 */
  uVar4 = System_String__Contains_2f8242c(param_2,*(undefined8 *)PTR_DAT_049c88b8,5,0);
  puVar9 = (undefined8 *)PTR_DAT_049c88b0;
  puVar2 = PTR_DAT_049b3bd0;
                    /* catch() { ... } // from try @ 025f9c30 with catch @ 025f9c6c */
                    /* catch() { ... } // from try @ 025f9c2c with catch @ 025f9c70 */
                    /* catch() { ... } // from try @ 025f9af4 with catch @ 025f9c74 */
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 025f9968 with catch @ 025f9c84 */
                    /* catch() { ... } // from try @ 025f9984 with catch @ 025f9c88 */
                    /* catch() { ... } // from try @ 025f9950 with catch @ 025f9c8c */
                    /* catch() { ... } // from try @ 025f98c4 with catch @ 025f9c90 */
                    /* catch() { ... } // from try @ 025f9c20 with catch @ 025f9c94 */
                    /* catch() { ... } // from try @ 025f98e4 with catch @ 025f9c98 */
    uVar4 = System_String__Contains_2f8242c(param_2,*(undefined8 *)PTR_DAT_049c88b0,5,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = System_String__StartsWith_2f7b8c8(param_2,*(undefined8 *)PTR_DAT_049c88c0,5,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_String__StartsWith_2f7b8c8(param_2,*(undefined8 *)PTR_DAT_049c6290,5,0);
        if ((uVar4 & 1) == 0) goto LAB_025f9cd0;
        iVar1 = *(int *)(param_2 + 0x10);
        uVar8 = 2;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x10);
        uVar8 = 1;
      }
      param_1[1] = uVar8;
      param_2 = System_String__Substring_2f7f570(param_2,1,iVar1 + -1,0);
      goto LAB_025f9cd0;
    }
    lVar7 = *(long *)(puVar2 + 0x90);
    uVar8 = 2;
  }
  else {
                    /* catch() { ... } // from try @ 025f9b48 with catch @ 025f9c78 */
    lVar7 = *(long *)(PTR_DAT_049b3bd0 + 0x90);
                    /* catch() { ... } // from try @ 025f9c24 with catch @ 025f9c7c */
    uVar8 = 1;
    puVar9 = (undefined8 *)puVar3;
                    /* catch() { ... } // from try @ 025f9ac8 with catch @ 025f9c80 */
  }
  uVar6 = **(undefined8 **)(lVar7 + 0xb8);
  uVar5 = *puVar9;
                    /* try { // try from 025f9cb8 to 026f9cbb has its CatchHandler @ 025f9cc0 */
                    /* catch() { ... } // from try @ 025f9cb8 with catch @ 025f9cc0 */
                    /* try { // try from 025f9cc4 to 026f9ccb has its CatchHandler @ 025f9cd4 */
  param_1[1] = uVar8;
  param_2 = System_String__Replace_2f7f6c0(param_2,uVar5,uVar6,5,0);
LAB_025f9cd0:
  puVar3 = PTR_DAT_049c88a8;
                    /* catch() { ... } // from try @ 025f9c40 with catch @ 025f9cd4
                       catch() { ... } // from try @ 025f9cc4 with catch @ 025f9cd4 */
  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
            (param_2,1,&uStack_24,*(undefined8 *)puVar3);
                    /* try { // try from 025f9cfc to 026f9ee7 has its CatchHandler @ 025f9cfc
                       catch() { ... } // from try @ 025f9cfc with catch @ 025f9cfc
                       catch() { ... } // from try @ 025f9f5c with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa028 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa0d8 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa104 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa1f0 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa220 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa2f0 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa36c with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa398 with catch @ 025f9cfc
                       catch() { ... } // from try @ 025fa3e0 with catch @ 025f9cfc */
  *param_1 = uStack_24;
  return;
}

