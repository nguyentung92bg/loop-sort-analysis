/* IL2CPP: Extensions$$GetCenterPoint<object>
UnityEngine_Vector3_o Extensions__GetCenterPoint_object_ (System_Collections_Generic_List_T__o* components, const MethodInfo_25EF5A0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026ef758) */
/* IL2CPP: Extensions$$GetCenterPoint<object>
   UnityEngine_Vector3_o Extensions__GetCenterPoint_object_ (System_Collections_Generic_List_T__o*
   components, const MethodInfo_25EF5A0* method); */

float Extensions__GetCenterPoint_object__25ef5a0(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_38;
  
                    /* try { // try from 026ef5a0 to 027ef5ab has its CatchHandler @ 026efa40 */
  lStack_48 = param_2;
  if (*(long *)(param_2 + 0x38) == 0) {
                    /* try { // try from 026ef5cc to 027ef60b has its CatchHandler @ 026efa7c */
    FUN_02229774(param_2);
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  if (param_1 != 0) {
                    /* try { // try from 026ef61c to 027ef627 has its CatchHandler @ 026efa68 */
    fVar9 = **(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_1,&uStack_78,*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
    uStack_60 = uStack_78;
    uStack_50 = plStack_68;
                    /* try { // try from 026ef638 to 027ef63b has its CatchHandler @ 026efa74 */
    uStack_78 = 0;
    plStack_68 = &lStack_48;
    uStack_58 = puStack_70;
    puStack_70 = &uStack_60;
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_60,*(undefined8 *)(*(long *)(lStack_48 + 0x38) + 0x30));
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 026ef70c to 027ef717 has its CatchHandler @ 026efa34 */
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_60,*(undefined8 *)(*(long *)(lStack_48 + 0x38) + 0x38));
                    /* try { // try from 026ef724 to 027ef733 has its CatchHandler @ 026efa30 */
        return fVar9 / (float)*(int *)(param_1 + 0x18);
      }
      lVar7 = *(long *)(*(long *)(lStack_48 + 0x38) + 0x18);
      lVar4 = *(long *)(lVar7 + 0x20);
      uVar2 = *(ushort *)(lVar4 + 0x135);
      lVar5 = lVar4;
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_02229718();
                    /* try { // try from 026ef684 to 027ef68f has its CatchHandler @ 026efa70 */
        lVar4 = *(long *)(lVar7 + 0x20);
        uVar2 = *(ushort *)(lVar4 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 026ef6a8 to 027ef6ab has its CatchHandler @ 026efb78 */
        lVar4 = FUN_02229718();
      }
      uVar6 = thunk_FUN_0224e54c(&uStack_60,
                                 *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 026ef6c4 to 027ef6f3 has its CatchHandler @ 026efa64 */
      func_0x04608620(&lStack_38,uVar6,uVar1);
      if (lStack_38 == 0) break;
      lVar5 = UnityEngine_Component__get_transform_3c18724(lStack_38,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar8 = (float)UnityEngine_Transform__get_position_3c2d540(lVar5,0);
      fVar9 = fVar9 + fVar8;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026ef74c to 027ef753 has its CatchHandler @ 026efa70 */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

