import plotly.graph_objects as go

# Sample data
years = [2000, 2005, 2010, 2015, 2020]
usa_population = [282.2, 295.5, 309.3, 321.4, 331.0]
china_population = [1267.4, 1303.7, 1339.7, 1371.2, 1402.1]
india_population = [1053.0, 1147.6, 1234.3, 1310.2, 1380.0]

# Create traces
fig = go.Figure()

fig.add_trace(go.Scatter(x=years, y=usa_population,
              mode='lines+markers', name='USA'))
fig.add_trace(go.Scatter(x=years, y=china_population,
              mode='lines+markers', name='China'))
fig.add_trace(go.Scatter(x=years, y=india_population,
              mode='lines+markers', name='India'))

# Edit the layout
fig.update_layout(
    title='Population Growth Over Years',
    xaxis_title='Year',
    yaxis_title='Population (in millions)',
    hovermode='x unified'
)

# Show the figure
fig.show()
