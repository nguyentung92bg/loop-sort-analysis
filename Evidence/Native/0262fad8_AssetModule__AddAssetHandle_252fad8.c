/* IL2CPP: AssetModule$$AddAssetHandle
void AssetModule__AddAssetHandle (AssetModule_o* __this, UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AssetModule$$AddAssetHandle
   void AssetModule__AddAssetHandle (AssetModule_o* __this,
   UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, const MethodInfo*
   method); */

void AssetModule__AddAssetHandle_252fad8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4bf11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4210);
    FUN_021f03f8(PTR_DAT_049c9e70);
    FUN_021f03f8(PTR_DAT_049c9e78);
    bRam0000000004f4bf11 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
    uVar1 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                      (*(long *)(param_1 + 0x20),&uStack_40,*(undefined8 *)PTR_DAT_049c9e70);
    if ((uVar1 & 1) != 0) {
      return;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049c9e78) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0262fbb0;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049c9e78,0);
LAB_0262fbb0:
      (*(code *)*puVar2)(plVar5,0,puVar2[1]);
      if (*(long *)(param_1 + 0x20) != 0) {
        uStack_58 = param_2[1];
        uStack_60 = *param_2;
        uStack_50 = param_2[2];
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                  (*(long *)(param_1 + 0x20),&uStack_60,*(undefined8 *)PTR_DAT_049c4210);
        uStack_78 = param_2[1];
        uStack_80 = *param_2;
        uStack_70 = param_2[2];
        AssetModule__WaitLoad_252fc1c(param_1,&uStack_80);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

