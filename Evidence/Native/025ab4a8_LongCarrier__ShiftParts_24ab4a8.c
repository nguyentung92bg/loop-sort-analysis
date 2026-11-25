/* IL2CPP: LongCarrier$$ShiftParts
void LongCarrier__ShiftParts (System_Collections_Generic_List_Transform__o* parts, System_Collections_Generic_List_Vector3__o* positions, UnityEngine_Vector3_o shift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$ShiftParts
   void LongCarrier__ShiftParts (System_Collections_Generic_List_Transform__o* parts,
   System_Collections_Generic_List_Vector3__o* positions, UnityEngine_Vector3_o shift, const
   MethodInfo* method); */

void LongCarrier__ShiftParts_24ab4a8
               (undefined4 param_1,float param_2,float param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  if ((bRam0000000004f4bb2c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bddd0);
    FUN_021f03f8(PTR_DAT_049bddd8);
    FUN_021f03f8(PTR_DAT_049bed78);
    bRam0000000004f4bb2c = 1;
  }
  puVar3 = PTR_DAT_049bed78;
  puVar2 = PTR_DAT_049bddd8;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      iVar8 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_4,iVar8,&fStack_80,*(undefined8 *)puVar2);
        if (param_5 == 0) goto LAB_025ab5e4;
        lVar1 = CONCAT44(fStack_7c,fStack_80);
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_5,iVar8,&fStack_80,*(undefined8 *)puVar3);
        fVar6 = fStack_78;
        fVar5 = fStack_7c;
        fVar4 = fStack_80;
        if (lVar1 == 0) goto LAB_025ab5e4;
        lVar7 = UnityEngine_Transform__get_parent_3c2d470(lVar1,0);
        if (lVar7 == 0) goto LAB_025ab5e4;
        fVar10 = param_2;
        fVar11 = param_3;
        fVar9 = (float)UnityEngine_Transform__InverseTransformVector_3c2eb7c
                                 (param_1,param_2,param_3,lVar7,0);
        UnityEngine_Transform__set_localPosition_3c2c450
                  (fVar4 + fVar9,fVar5 + fVar10,fVar6 + fVar11,lVar1,0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_4 + 0x18));
    }
    return;
  }
LAB_025ab5e4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

