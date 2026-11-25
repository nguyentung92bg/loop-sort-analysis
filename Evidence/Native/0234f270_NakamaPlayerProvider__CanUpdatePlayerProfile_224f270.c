/* IL2CPP: NakamaPlayerProvider$$CanUpdatePlayerProfile
bool NakamaPlayerProvider__CanUpdatePlayerProfile (NakamaPlayerProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPlayerProvider$$CanUpdatePlayerProfile
   bool NakamaPlayerProvider__CanUpdatePlayerProfile (NakamaPlayerProvider_o* __this, const
   MethodInfo* method); */

uint NakamaPlayerProvider__CanUpdatePlayerProfile_224f270(void)

{
  uint uVar1;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  uVar1 = NakamaServices__TryGetApi_2243784(&uStack_8);
  return uVar1 & 1;
}

