/* IL2CPP: Store$$GetStoreUrl
System_String_o* Store__GetStoreUrl (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Store$$GetStoreUrl
   System_String_o* Store__GetStoreUrl (const MethodInfo* method); */

void Store__GetStoreUrl_24f94dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c8840;
  if ((bRam0000000004f4bd35 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8840);
    bRam0000000004f4bd35 = 1;
  }
  uVar2 = Store__get_PlayBundleId_24f942c();
  uVar2 = UnityEngine_Networking_UnityWebRequest__EscapeURL_3f09768(uVar2,0);
  uVar3 = *(undefined8 *)puVar1;
  uStack_28 = 0;
  uStack_30 = 0;
  System_ParamsArray___ctor_310f10c(&uStack_30,uVar2,0);
  uStack_48 = uStack_28;
  uStack_50 = uStack_30;
  uStack_38 = 0;
  uStack_40 = 0;
  System_String__FormatHelper_2f7deb0(0,uVar3,&uStack_50);
  return;
}

