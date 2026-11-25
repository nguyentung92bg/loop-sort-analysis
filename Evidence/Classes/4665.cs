// Namespace: 
public interface ICloudPrefs : IPrefs // TypeDefIndex: 4665
{
	// Properties
	public abstract bool Monotonic { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool get_Monotonic();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void WriteTo(ICloudPrefsStore store);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void ReadFrom(ICloudPrefsStore store);
}

