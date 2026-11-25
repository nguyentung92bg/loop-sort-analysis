/* IL2CPP: CloudPrefsRegistry$$GetAllPrefs
UnityEngine_Pool_PooledObject_List_ICloudPrefs___o CloudPrefsRegistry__GetAllPrefs (System_Collections_Generic_List_ICloudPrefs__o** prefs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsRegistry$$GetAllPrefs
   UnityEngine_Pool_PooledObject_List_ICloudPrefs___o CloudPrefsRegistry__GetAllPrefs
   (System_Collections_Generic_List_ICloudPrefs__o** prefs, const MethodInfo* method); */

undefined1  [16] CloudPrefsRegistry__GetAllPrefs_24e96d4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_DAT_049c7f50;
  if ((bRam0000000004f4bcad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049c7f58);
    FUN_021f03f8(PTR_DAT_049c7f50);
    FUN_021f03f8(PTR_DAT_049c7f60);
    bRam0000000004f4bcad = 1;
  }
  puVar3 = PTR_DAT_049c7f58;
  puVar1 = PTR_DAT_049c7f20;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar5 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                     (param_1,*(undefined8 *)puVar3);
  lVar4 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar4 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (lVar4,**(undefined8 **)(*(long *)puVar1 + 0xb8),*(undefined8 *)PTR_DAT_049c7f60);
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

